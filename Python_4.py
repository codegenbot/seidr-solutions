def main():
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
    result = mean_absolute_deviation(numbers)
    print(f"Mean Absolute Deviation: {result}")


if __name__ == "__main__":
    main()