
def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with - 
    
    fix_spaces("Example") == "Example"
    fix_spaces("Example 1") == "Example_1"
    fix_spaces(" Example 2") == "_Example_2"
    fix_spaces(" Example   3") == "_Example-3"
    """
    text = text.replace('  ', '-')
    text = text.replace(' ', '_')
    return text



def check(function):
    assert function("Example") == "Example"
    assert function("Example 1") == "Example_1"
    assert function(" Example 2") == "_Example_2"
    assert function(" Example   3") == "_Example-3"
    assert function("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple"
    print("This prints if this assert fails 4 (good for debugging!)")


check(fix_spaces)
