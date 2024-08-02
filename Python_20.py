def main():
    numbers = list(map(float, input().split()))
    result = find_closest_elements(numbers)
    print(result)

if __name__ == "__main__":
    main()