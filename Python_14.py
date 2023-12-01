from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes


# Get the number of test cases from the user
num_test_cases = int(input())

result = []
# Loop over the number of test cases
for _ in range(num_test_cases):
    # Prompt user for input
    input_string = input()
    # Call the function with the input string and add the result to the list
    result.append(all_prefixes(input_string))

# Print the result
print(result)