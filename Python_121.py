def sum_odd(lst):
    return sum(i for i in lst if isinstance(i, int) and i % 2 != 0)


if __name__ == "__main__":
    solution = sum_odd([])
    print(solution)