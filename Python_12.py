```
def longest(*input_strs):
    if not input_strs:
        print(f"No strings were entered.")
    else:
        result = []
        for s in input_strs:
            if s.strip():
                result.append((s.strip(), len(s.strip())))
        if result:
            print("The longest strings are:")
            for s, length in sorted(result, key=lambda x: x[1], reverse=True):
                print(f"'{s}' with {length} characters")
        else:
            print(f"Single string {' '.join(map(str, input_strs))} with {len(' '.join(map(str, input_strs)))} characters.")