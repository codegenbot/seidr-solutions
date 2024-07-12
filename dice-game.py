n = int(input())
m = int(input())
print(
    "{:.2f}".format(
        sum([(n - i) / n * (m - i) / m for i in range(1, n + 1)])
        if n > 1 and m > 1
        else 0.0
    )
)