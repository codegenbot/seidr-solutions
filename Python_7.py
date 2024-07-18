def filter_strings(strings, substring):
    return [s for s in strings if substring in s]  # Provided function definition

# Function call to filter strings based on the substring
filter_strings(["apple", "banana", "cherry"], "an")  # Output: ['banana']