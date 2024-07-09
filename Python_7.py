def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Function call
filter_strings(["apple", "banana", "cherry"], "an")