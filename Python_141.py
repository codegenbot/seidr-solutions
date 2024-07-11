```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.')[0].lstrip().startswith(('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z')) or file_name.split('.')[1].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    else:
        return 'Yes'