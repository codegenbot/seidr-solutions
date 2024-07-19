```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return (
        "-".join(
            [
                text[i].replace(" ", "_") 
                if i == 0 or (text[i - 1] != " " and text[i] == " ")
                else text[i]
                for i in range(len(text))
            ]
        )
    )