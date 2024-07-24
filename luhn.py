return sum(
    (9 - int(x)) // 10 if int(x) > 9 else int(x)
    for x in str(
        sum(
            int(d)
            for d in (
                2 * int(i) if i.isdigit() and len(card) - 1 - i % 2 else int(i)
                for i in card
            )
        )
    )
)