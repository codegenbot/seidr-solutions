from collections import deque
from typing import List, Tuple
from functools import lru_cache


def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:



@lru_cache(maxsize=None)
def get_reachable_nodes(
    grid: List[List[int]], node: Tuple[int, int], distance: int
) -> List[Tuple[int, int]]:
    """
    Returns all nodes in grid that are reacheable within specified distance.
    """
    n = len(grid)
    reached = []
    if distance == 0:
        if node in reached:
            return []
        return [node]
    else:
        if node[0] - 1 >= 0:
            reached.extend(
                get_reachable_nodes(
                    grid, (node[0] - 1, node[1]), distance - 1,
                )
            )
        if node[0] + 1 < n:
            reached.extend(
                get_reachable_nodes(
                    grid, (node[0] + 1, node[1]), distance - 1,
                )
            )
        if node[1] - 1 >= 0:
            reached.extend(
                get_reachable_nodes(
                    grid, (node[0], node[1] - 1), distance - 1,
                )
            )
        if node[1] + 1 < n:
            reached.extend(
                get_reachable_nodes(
                    grid, (node[0], node[1] + 1), distance - 1,
                )
            )
    return reached


def minPath(grid, k):
    n = len(grid)
    nodes = [(i, j) for i in range(n) for j in range(n)]
    node_paths = {node: deque() for node in nodes}
    node_paths[nodes[0]] = [grid[0][0]]
    q = deque([nodes[0]])
    visited = set()

    def update_path(node, grid, visited):
        value = grid[node[0]][node[1]]
        reached = {node}
        for d in node_paths[node]:
            if value < d:
                visited.add(node)
                return []
        for i in range(1, n):
            reached.update(get_reachable_nodes(grid, node, i))
        reached.update(get_reachable_nodes(grid, node, k))
        for r in reached:
            if r[0] == node[0] and r[1] == node[1]:
                continue
            if value == grid[r[0]][r[1]]:
                continue
            if r not in node_paths:
                node_paths[r] = deque()
            node_path = [value] + list(node_paths[node])
            if not node_paths[r] or node_paths[r][0] > node_path[0]:
                for d in reversed(node_paths[r]):
                    if d == value:
                        node_paths[r].clear()
                        node_paths[r].extendleft([value])
                        node_paths[r].extendleft(d)
                        break
                    if d < value:
                        node_paths[r].clear()
                        node_paths[r].extendleft(node_path)
                        break
                    node_paths[r].extendleft(d)
            if not node_paths[r]:
                q.append(r)
        return list(reached)

    while q:
        cur = q.popleft()
        visited.add(cur)
        update_path(cur, grid, visited)

    if len(node_paths[nodes[n - 1]]) == 1 and node_paths[nodes[n - 1]] == [
        grid[n - 1][n - 1]
    ]:
        return []

    return [grid[n - 1][n - 1]] + node_paths[nodes[len(nodes) - 1]]
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
