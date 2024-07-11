```
def filter_by_prefix(strings, prefix):
    if not prefix:
        return []
    return [s for s in strings if s.startswith(prefix)]


num_strings = None
while num_strings is None:
    try:
        num_strings = int(input("Enter number of strings (integer): "))
    except ValueError:
        print("Invalid input. Please enter an integer.")

stored_strings = [input() for _ in range(num_strings)]

prefix = input("Enter prefix (string): ")
filtered_strings = filter_by_prefix(stored_strings, prefix)
if filtered_strings:
    print("\n".join(filtered_strings))
else:
    print("No strings found with the given prefix.")