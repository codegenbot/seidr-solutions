def kebab_to_camel(s):
    return "".join(
        [
            s[0].lower() if i == 0 else s[i].capitalize()
            for i in range(len(s))
            if s[i] != "-"
        ]
    )


input_str = input().split()
output_str = " ".join([kebab_to_camel(word) for word in input_str])
print(output_str)