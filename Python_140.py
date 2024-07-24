```
def fix_spaces(input_text):
    return input_text.replace(" ", "_").strip()

def check(input_text): 
    input_text = input_text.strip() 
    assert fix_spaces(input_text) == "-Exa_1_2_2_mple"