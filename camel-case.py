input_str = input().split()
output_str = ""
for word in input_str:
    if "-" in word:
        output_str += word.replace("-", "").capitalize()
    else:
        output_str += word
    output_str += " "
print(output_str.strip())