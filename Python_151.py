def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)


def main():
    num_list = list(map(int, input("Enter space-separated numbers: ").split()))
    print(double_the_difference(num_list))


if __name__ == "__main__":
    main()