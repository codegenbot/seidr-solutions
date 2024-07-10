```
import re

def filter_by_substring(strings, substring):
    while True:
        expected_output = input(
            "Is your expected output 'True values', 'False values', or 'all'? "
        )
        if expected_output.lower() in ["true values", "false values", "all"]:
            break
        else:
            print("Invalid input. Please try again.")

    while True:
        user_input = input("Enter strings (comma-separated), or 'done' to finish: ")
        if user_input.lower() == "done":
            break
        strings.extend([s.strip() for s in user_input.split(",")])

    while True:
        try:
            num_to_display = int(
                input(f"Enter the number of results to display (1-{len(strings)}): ")
            )
            if 1 <= num_to_display <= len(strings):
                break
            else:
                print("Please enter a number between 1 and {}".format(len(strings)))
        except ValueError:
            print("Invalid input. Please try again.")

    true_values = [s for s in strings if re.compile(substring).search(s)]
    false_values = [s for s in strings if not re.compile(substring).search(s)]

    if expected_output.lower() == "true values":
        print(true_values[:num_to_display])
    elif expected_output.lower() == "false values":
        print(false_values[:num_to_display])
    else:
        if len(true_values) > 0:
            print(true_values[:num_to_display])
        if len(false_values) > 0:
            print(false_values[:num_to_display])