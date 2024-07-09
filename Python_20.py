if __name__ == "__main__":
    numbers = [float(x) for x in input().split()]
    output = find_closest_elements(numbers)
    print(output)