```
input_strs = input("Enter some strings (separated by spaces): ")
result = []
if ' ' in input_strs:
    for s in [i.strip() for i in input_strs.split()]:
        if s:
            result.append((s, len(s)))
else:
    if input_strs:  
        result.append((" ".join(input_strs), len(" ".join(input_strs))))
if result:  
    print("The longest strings are:")
    for s, length in sorted(result, key=lambda x:x[1], reverse=True):
        print(f"'{s}' with {length} characters")
else:
    print("No strings were entered.")