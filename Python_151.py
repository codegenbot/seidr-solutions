def double_the_difference(numbers):
    if len(set(map(int, numbers.split()))) == 1:
        return "00"
    else:
        difference = max(list(map(int, numbers.split()))) - min(
            list(map(int, numbers.split()))
        )
        return str(difference * 2)


def check(func):
    print(func(input()))


if __name__ == "__main__":
    check(double_the_difference)