```
def main():
    grid = []
    m = int(input("Enter number of rows: "))
    n = int(input("Enter number of columns: "))

    for i in range(m):
        row = list(
            map(int, input("Enter the numbers in a row separated by space: ").split())
        )
        grid.append(row)

    def dfs(i, j, path, visited=None, curr_sum=0):
        global minPath
        if i == len(grid) - 1 and j == len(grid[0]) - 1:
            return curr_sum
        min_path = float("inf")
        for x, y in [(0, 1), (1, 0)]:
            ni, nj = i + x, j + y
            if (
                0 <= ni < len(grid)
                and 0 <= nj < len(grid[0])
                and ((ni, nj) not in visited or not visited)
            ):
                new_sum = curr_sum + grid[ni][nj]
                new_path = dfs(ni, nj, path + [grid[ni][nj]], set((ni, nj)), new_sum)
                if new_sum < min_path:
                    minPath = new_sum
        return minPath

    global minPath
    minPath = float("inf")
    print(dfs(0, 0, [], set(), grid[0][0]))


if __name__ == "__main__":
    main()