
def helper(grid, k, i, j, visit, path):
    if k == 0:
        return path

    visit.add((i, j))
    result = []

    for new_i, new_j in [(i, j + 1), (i, j - 1), (i + 1, j), (i - 1, j)]:
        if new_i >= 0 and new_i < len(grid) and new_j >= 0 and new_j < len(grid) and (new_i, new_j) not in visit:
            path.append(grid[new_i][new_j])
            result.append(helper(grid, k - 1, new_i, new_j, visit, path))
            path.pop()

    visit.remove((i, j))
    return min(result)

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

    visit = set()
    result = []
    for i in range(len(grid)):
        for j in range(len(grid)):
            if (i, j) not in visit:
                path = [grid[i][j]]
                result.append(helper(grid, k - 1, i, j, visit, path))
    return min(result)


def main():
    print(minPath([[1,2,3], [4,5,6], [7,8,9]], 3))
    print(minPath([[5,9,3], [4,1,6], [7,8,2]], 1))


if __name__ == "__main__":
    main()
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
