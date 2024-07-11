def max_water(n, m):
    max_water = 0
    for left in range(m):
        min_height = float("inf")
        for right in range(left + 1, m):
            min_height = min(
                min_height,
                [
                    input("Enter the height of column {}: ".format(i)).split()
                    for i in range(n)
                ][i][right],
            )
            max_water = max(
                max_water,
                (
                    (
                        min_height
                        - [
                            input("Enter the height of column {}: ".format(i)).split()
                            for i in range(n)
                        ][i][left]
                    )
                    if min_height
                    > [
                        input("Enter the height of column {}: ".format(i)).split()
                        for i in range(n)
                    ][i][left]
                    else 0
                ),
            )
    return max_water