```
def longest(input_strs):
    if not input_strs.strip():
        print(f"No strings were entered.")
    else:
        result = []
        for s in [i.strip() for i in input_strs.split()]:
            if s:
                result.append((s, len(s)))
        if result:
            print("The longest strings are:")
            for s, length in sorted(result, key=lambda x: x[1], reverse=True):
                print(f"'{s}' with {length} characters")
        else:
            print(f"Single string '{input_strs}' with {len(input_strs)} characters.")