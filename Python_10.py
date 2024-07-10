input_str = input("Enter a string: ").rstrip()
vowels = ['a', 'e', 'i', 'o', 'u']
count = 0
for char in input_str:
    if char.lower() in vowels:
        count += 1
print(count)