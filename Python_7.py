import re

def filter_by_substring():
    while True:
        expected_output = input("Is your expected output 'True values', 'False values', or 'all'? ")
        if expected_output.lower() not in ["true values", "false values", "all"]:
            print("Invalid input. Please try again.")
            continue
        break

    strings = []
    while True:
        input_str = input("Enter strings (comma-separated), or 'done' to finish: ")
        if input_str.lower() == 'done':
            break
        strings.extend([s.strip() for s in input_str.split(",")])

    substring = input("Enter a substring: ")

    while True:
        try:
            num_to_display = int(input(f"Enter the number of results to display (1-{len(strings)}): "))
            if 1 <= num_to_display <= len(strings):
                break
            else:
                print("Please enter a number between 1 and {}".format(len(strings)))
        except ValueError:
            print("Invalid input. Please try again.")

    result = [s for s in strings if re.compile(substring).search(s)]
    if expected_output.lower() == "true values":
        print(result[:num_to_display])
    elif expected_output.lower() == "false values":
        print([s for s in strings if not re.compile(substring).search(s)][:num_to_display])
    else:
        print(result + [s for s in strings if not re.compile(substring).search(s)][:num_to_display])

filter_by_substring()