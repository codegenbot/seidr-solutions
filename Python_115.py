def calculate():
    while True:
        max_fill = int(input("Enter max fill: "))
        if max_fill >= 0:
            break
    print(f"Max fill set to {max_fill}.")
    total_water = 0
    for i in range(1, max_fill + 1):
        water_level = int(input(f"Enter water level at day {i}: "))
        if water_level > max_fill:
            print("Water level cannot exceed the maximum fill. Please try again.")
            continue
        total_water += water_level
    average_water = total_water / max_fill
    print(f"The average water level is {average_water}.")


if __name__ == "__main__":
    calculate()