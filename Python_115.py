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
    while True:
        try:
            while True:
                try:
                    water_levels = list(map(int, input(f"Enter water levels for days 1 to {max_fill} (space-separated): ").split()))
                    if len(water_levels) == max_fill:
                        break
                except ValueError:
                    print("Please enter valid integers separated by spaces.")
        break

    for i, level in enumerate(water_levels):
        while True:
            try:
                level = int(input(f"Enter water level for day {i+1}: "))
                if 0 <= level <= max_fill:
                    total_water += level
                    break
                else:
                    print(
                        "Water level cannot be less than zero or exceed the maximum fill. Please try again."
                    )
            except ValueError:
                print("Please enter a valid integer.")

    average_water = total_water / max_fill if max_fill != 0 else float("nan")
    print(f"The average water level is {average_water}.")


if __name__ == "__main__":
    calculate()