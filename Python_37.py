def main():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    print(sorted(set(numbers)))


if __name__ == "__main__":
    main()