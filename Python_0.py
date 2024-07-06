from typing import List


def has_close_elements() -> bool:
    input_str = input(
        "Enter a list of numbers (space separated) followed by a space and then a threshold: "
    )

    try:
        num_list, threshold = map(float, input_str.split()[:-1]), float(
            input_str.split()[-1]
        )
        if not isinstance(num_list, list):
            raise ValueError("Invalid input. Please enter a list of numbers.")

        num_list = list(
            map(float, num_list)
        )  # Convert the string into a float and store in list
        num_list.sort()
        for i in range(1, len(num_list)):
            if abs(num_list[i] - num_list[i - 1]) <= threshold:
                return True
        return False
    except ValueError as e:
        print(f"Error: {e}")
        return None


print(has_close_elements())