```
def calculate():
    while True:
        try:
            max_fill = int(input("Enter maximum water fill: "))
            if max_fill >= 0:
                break
        except ValueError:
            print("Please enter a valid integer.")

    print(f"Maximum water fill set to {max_fill}.")
    total_water = 0
    water_levels = input(f"Enter water levels for days 1 to {max_fill} (space-separated): ").split()
    for i, level in enumerate(map(int, water_levels)):
        if 0 <= int(level) <= max_fill:
            total_water += int(level)
        else:
            print(
                f"Water level at day {i+1} cannot be less than zero or exceed the maximum fill. Please try again."
            )
            break
    average_water = total_water / max_fill if max_fill != 0 else 0
    print(f"The average water level is {average_water}.")


if __name__ == "__main__":
    calculate()