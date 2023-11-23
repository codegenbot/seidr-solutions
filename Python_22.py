def filter_integers():
    values = input().split(",")
    return [int(value) for value in values if value.isdigit()]


def main():
    result = filter_integers()
    print(result)


if __name__ == "__main__":
    main()