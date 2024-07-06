def by_length(arr):
    # Sort the array in ascending order
    arr.sort()
    # Reverse the sorted array
    arr.reverse()
    # Create a dictionary to map digits to their corresponding names
    digit_to_name = {
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine",
    }
    # Create an empty list to store the resulting array
    result = []
    # Iterate over the sorted and reversed array
    for num in arr:
        # If the current number is between 1 and 9 inclusive, add its corresponding name to the result list
        if 1 <= num <= 9:
            result.append(digit_to_name[num])
    return result