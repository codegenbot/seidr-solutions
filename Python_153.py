def complete_code(class_name, strongest_extension, filtered_extensions):
    return f"{class_name}.{strongest_extension}" if strongest_extension.isalpha() else f"{class_name}.{filtered_extensions[0]}"