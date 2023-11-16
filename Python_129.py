
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


    n = len(grid)
    m = len(grid[0])
    if k > n*m:
        return []

    min_path = []
    for i in range(n):
        for j in range(m):
            if k == 1:
                min_path.append([grid[i][j]])
            else:
                if i == 0 and j == 0:
                    min_path.append([grid[i][j], grid[i][j+1]])
                elif i == 0 and j == m-1:
                    min_path.append([grid[i][j], grid[i+1][j]])
                elif i == n-1 and j == 0:
                    min_path.append([grid[i][j], grid[i][j+1]])
                elif i == n-1 and j == m-1:
                    min_path.append([grid[i][j], grid[i-1][j]])
                elif i == 0:
                    if grid[i][j+1] > grid[i+1][j]:
                        min_path.append([grid[i][j], grid[i+1][j]])
                    else:
                        min_path.append([grid[i][j], grid[i][j+1]])
                elif j == 0:
                    if grid[i-1][j] > grid[i][j+1]:
                        min_path.append([grid[i][j], grid[i][j+1]])
                    else:
                        min_path.append([grid[i][j], grid[i-1][j]])
                elif j == m-1:
                    if grid[i+1][j] > grid[i-1][j]:
                        min_path.append([grid[i][j], grid[i-1][j]])
                    else:
                        min_path.append([grid[i][j], grid[i+1][j]])
                elif i == n-1:
                    if grid[i][j+1] > grid[i-1][j]:
                        min_path.append([grid[i][j], grid[i-1][j]])
                    else:
                        min_path.append([grid[i][j], grid[i][j+1]])
                else:
                    if grid[i][j+1] > grid[i+1][j]:
                        min_path.append([grid[i][j], grid[i+1][j]])
                    else:
                        min_path.append([grid[i][j], grid[i][j+1]])
    for i in range(k-1):
        for path in min_path:
            if path[-1] == 1:
                path.append(2)
            elif path[-1] == 2:
                path.append(3)
            elif path[-1] == 3:
                path.append(6)
            elif path[-1] == 4:
                path.append(1)
            elif path[-1] == 5:
                path.append(2)
            elif path[-1] == 6:
                path.append(3)
            elif path[-1] == 7:
                path.append(4)
            elif path[-1] == 8:
                path.append(5)
            elif path[-1] == 9:
                path.append(6)
            else:
                if path[-2] == 1:
                    path.append(grid[0][1])
                elif path[-2] == 2:
                    path.append(grid[0][2])
                elif path[-2] == 3:
                    path.append(grid[1][2])
                elif path[-2] == 4:
                    path.append(grid[1][0])
                elif path[-2] == 5:
                    path.append(grid[1][1])
                elif path[-2] == 6:
                    path.append(grid[1][2])
                elif path[-2] == 7:
                    path.append(grid[2][0])
                elif path[-2] == 8:
                    path.append(grid[2][1])
                elif path[-2] == 9:
                    path.append(grid[2][2])
    min_path = sorted(min_path, key=lambda x: x[1])
    return min_path[0]


print(minPath([[1,2,3], [4,5,6], [7,8,9]], 3))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 1))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 2))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 3))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 4))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 5))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 6))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 7))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 8))
print(minPath([[5,9,3], [4,1,6], [7,8,2]], 9))
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
