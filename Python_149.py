```
def count_vowels(lst):
    vowels = 'aeiou'
    return sum(1 for word in lst if set(word).intersection(vowels))

def main():
    lst = input("Enter words (separated by space): ").lower().replace(" ", "").split()
    if len(lst) > 0:
        print(count_vowels(lst))
    else:
        print("Please enter at least one word.")

if __name__ == "__main__":
    main()