def count_vowels(input_data: str) -> str:
    vowels = "aeiouAEIOU"
    count = 0
    for char in input_data:
        if char in vowels:
            count += 1
    return str(count)


input_data = input("Enter the input data in the expected format: ")
output_data = count_vowels(input_data)
print(output_data)