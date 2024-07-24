return sum(
    int(x)
    for x in str(
        sum(map(lambda x: (x * 2 - 9) // 10 if i % 2 else int(x), range(len(card))))
    )
)