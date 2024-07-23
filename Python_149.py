def sorted_list_sum(lst):
    lst = list(map(str, input().split()))
    return sum(
        int(i)
        for i in sorted([i for i in lst if len(i) % 2 == 0], key=lambda x: (len(x), x))
    )