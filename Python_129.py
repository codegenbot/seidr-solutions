```Python
def min_length(all_paths):
    return min(sum(int(path) for path in all_paths))

user_input = input("Enter a list of paths separated by spaces: ")
all_paths = [path.strip() for path in user_input.split()]

check(min_length(all_paths))