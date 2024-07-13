def search(lst):
    max_num = -1
    for num in lst:
        if num > max_num:
            max_num = num
    return max_num


def main():
    while True:
        lst = list(map(int, input("Enter the numbers separated by space: ").split()))
        if all(isinstance(x, int) for x in lst):
            break
    print(search(lst))


if __name__ == "__main__":
    main()