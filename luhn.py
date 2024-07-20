card_list = list(map(int, "".join(filter(str.isdigit, str(card).replace(" ", "")))))
double_odd, single_even = zip(
    *[[x * 2, x] if i % 2 else [x] for i, x in enumerate(reversed(card_list))]
)
result = sum(
    int(i) if j % 2 == 0 else (int(i) - 9) if int(i) > 9 else int(i)
    for i, j in zip(
        double_odd + single_even, range(1, len(double_odd) + len(single_even) + 1)
    )
)