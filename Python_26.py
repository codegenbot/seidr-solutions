def remove_duplicates(input_str=None):
    if input_str is None:
        lists_input = input("Enter comma-separated lists of numbers: ")
    else:
        lists_input = str(input_str)
    try:
        lists = [
            list(map(int, l.split(",")))
            for l in lists_input.replace(" ", "").split(",")
        ]
        return list(set([item for sublist in lists for item in sublist]))
    except ValueError:
        print("Invalid input. Please enter comma-separated lists of numbers.")
        return []