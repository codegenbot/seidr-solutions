def main():
    numbers = [float(x) for x in input().split()]
    result = find_closest_elements(numbers)
    print(result)

if __name__ == "__main__":
    main()