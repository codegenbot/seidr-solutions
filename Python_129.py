import collections


def minFallingRainWater(m):
    n = len(m)

    def dfs(i, j, path, visited):
        if len(path) == n * n:
            return path

        visited.add((i, j))

        min_path = path[:]
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if new_path and (not min_path or new_path < min_path):
                    min_path = new_path

        return min_path

    start = [i for i, row in enumerate(map(str, m)) if "1" in "".join(row)][0]
    path = dfs(start, 0, [m[start][0]], set())

    return path


def main():
    n = int(input("Enter the number of rows: "))

    # Read the grid from user
    m = list(map(str, input(f"Enter {n} rows separated by space: ").split()))

    for i in range(0, len(m), n):
        m[i] = [int(x) for x in m[i]]

    print(minFallingRainWater(list(map(int, m))))


if __name__ == "__main__":
    main()