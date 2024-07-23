def sorted_list_sum():
    lst = list(map(str, input().split()))
    return sum(int(x) for x in sorted([word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x)))