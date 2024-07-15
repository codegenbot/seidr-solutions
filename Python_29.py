def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

result = filter_by_prefix(["apple", "banana", "orange"], "b")
print(result)  # Output: ["banana"]