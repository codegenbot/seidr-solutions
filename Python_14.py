try:
    input_string = input("Enter a string: ").strip()
    print(all_prefixes(input_string))
except Exception as e:
    print("Error:", e)