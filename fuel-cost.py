def fuel_cost_vector(numbers):
    return sum((num // 3 - 2) for num in numbers)


if __name__ == "__main__":
    numbers = []
    for line in sys.stdin:
        numbers.append(int(line.strip()))
    print(fuel_cost_vector(numbers))