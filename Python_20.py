if __name__ == "__main__":
    numbers = [float(x) for x in input().split()]
    closest_elements = find_closest_elements(numbers)
    print(*closest_elements)