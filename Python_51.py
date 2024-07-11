```
def remove_vowels():
    text = input("Enter a sentence: ")
    result = ''.join([char for char in text if char.lower() not in 'aeiou'])
    print(result)