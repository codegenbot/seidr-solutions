input_str = input().split()
output_str = ""
for i, word in enumerate(input_str):
    if "-" in word:
        words = word.split("-")
        output_str += words[0] + "".join(w.capitalize() for w in words[1:])
    else:
        output_str += word
    if i != len(input_str) - 1:
        output_str += " "

print(output_str)