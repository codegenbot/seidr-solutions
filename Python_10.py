```
def main():
    while True:
        try:
            input_string = input("Enter the string: ")
            words = input_string.split()
            break
        except ValueError:
            print("Invalid input. Please enter a string of space-separated words.")

    result = find_anagrams(input_string)

    print("Anagrams:")
    for i, word_list in enumerate(result):
        print(f"Group {i+1}: {' -> '.join(word_list)}")